#!/bin/sh
set -e

mkdir -p "${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}"

RESOURCES_TO_COPY=${PODS_ROOT}/resources-to-copy-${TARGETNAME}.txt
> "$RESOURCES_TO_COPY"

XCASSET_FILES=()

case "${TARGETED_DEVICE_FAMILY}" in
  1,2)
    TARGET_DEVICE_ARGS="--target-device ipad --target-device iphone"
    ;;
  1)
    TARGET_DEVICE_ARGS="--target-device iphone"
    ;;
  2)
    TARGET_DEVICE_ARGS="--target-device ipad"
    ;;
  3)
    TARGET_DEVICE_ARGS="--target-device tv"
    ;;
  *)
    TARGET_DEVICE_ARGS="--target-device mac"
    ;;
esac

install_resource()
{
  if [[ "$1" = /* ]] ; then
    RESOURCE_PATH="$1"
  else
    RESOURCE_PATH="${PODS_ROOT}/$1"
  fi
  if [[ ! -e "$RESOURCE_PATH" ]] ; then
    cat << EOM
error: Resource "$RESOURCE_PATH" not found. Run 'pod install' to update the copy resources script.
EOM
    exit 1
  fi
  case $RESOURCE_PATH in
    *.storyboard)
      echo "ibtool --reference-external-strings-file --errors --warnings --notices --minimum-deployment-target ${!DEPLOYMENT_TARGET_SETTING_NAME} --output-format human-readable-text --compile ${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/`basename \"$RESOURCE_PATH\" .storyboard`.storyboardc $RESOURCE_PATH --sdk ${SDKROOT} ${TARGET_DEVICE_ARGS}"
      ibtool --reference-external-strings-file --errors --warnings --notices --minimum-deployment-target ${!DEPLOYMENT_TARGET_SETTING_NAME} --output-format human-readable-text --compile "${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/`basename \"$RESOURCE_PATH\" .storyboard`.storyboardc" "$RESOURCE_PATH" --sdk "${SDKROOT}" ${TARGET_DEVICE_ARGS}
      ;;
    *.xib)
      echo "ibtool --reference-external-strings-file --errors --warnings --notices --minimum-deployment-target ${!DEPLOYMENT_TARGET_SETTING_NAME} --output-format human-readable-text --compile ${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/`basename \"$RESOURCE_PATH\" .xib`.nib $RESOURCE_PATH --sdk ${SDKROOT} ${TARGET_DEVICE_ARGS}"
      ibtool --reference-external-strings-file --errors --warnings --notices --minimum-deployment-target ${!DEPLOYMENT_TARGET_SETTING_NAME} --output-format human-readable-text --compile "${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/`basename \"$RESOURCE_PATH\" .xib`.nib" "$RESOURCE_PATH" --sdk "${SDKROOT}" ${TARGET_DEVICE_ARGS}
      ;;
    *.framework)
      echo "mkdir -p ${TARGET_BUILD_DIR}/${FRAMEWORKS_FOLDER_PATH}"
      mkdir -p "${TARGET_BUILD_DIR}/${FRAMEWORKS_FOLDER_PATH}"
      echo "rsync -av $RESOURCE_PATH ${TARGET_BUILD_DIR}/${FRAMEWORKS_FOLDER_PATH}"
      rsync -av "$RESOURCE_PATH" "${TARGET_BUILD_DIR}/${FRAMEWORKS_FOLDER_PATH}"
      ;;
    *.xcdatamodel)
      echo "xcrun momc \"$RESOURCE_PATH\" \"${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/`basename "$RESOURCE_PATH"`.mom\""
      xcrun momc "$RESOURCE_PATH" "${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/`basename "$RESOURCE_PATH" .xcdatamodel`.mom"
      ;;
    *.xcdatamodeld)
      echo "xcrun momc \"$RESOURCE_PATH\" \"${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/`basename "$RESOURCE_PATH" .xcdatamodeld`.momd\""
      xcrun momc "$RESOURCE_PATH" "${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/`basename "$RESOURCE_PATH" .xcdatamodeld`.momd"
      ;;
    *.xcmappingmodel)
      echo "xcrun mapc \"$RESOURCE_PATH\" \"${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/`basename "$RESOURCE_PATH" .xcmappingmodel`.cdm\""
      xcrun mapc "$RESOURCE_PATH" "${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/`basename "$RESOURCE_PATH" .xcmappingmodel`.cdm"
      ;;
    *.xcassets)
      ABSOLUTE_XCASSET_FILE="$RESOURCE_PATH"
      XCASSET_FILES+=("$ABSOLUTE_XCASSET_FILE")
      ;;
    *)
      echo "$RESOURCE_PATH"
      echo "$RESOURCE_PATH" >> "$RESOURCES_TO_COPY"
      ;;
  esac
}
if [[ "$CONFIGURATION" == "Debug" ]]; then
  install_resource "IconFontKit/IconFontKit/dashicons.ttf"
  install_resource "IconFontKit/IconFontKit/devicons.ttf"
  install_resource "IconFontKit/IconFontKit/dripicons.ttf"
  install_resource "IconFontKit/IconFontKit/elusiveicons-webfont.ttf"
  install_resource "IconFontKit/IconFontKit/Entypo.ttf"
  install_resource "IconFontKit/IconFontKit/EvilIcons.ttf"
  install_resource "IconFontKit/IconFontKit/FontAwesome.otf"
  install_resource "IconFontKit/IconFontKit/foundation-icons.ttf"
  install_resource "IconFontKit/IconFontKit/Genericons.ttf"
  install_resource "IconFontKit/IconFontKit/Hawcons-Filled.ttf"
  install_resource "IconFontKit/IconFontKit/Hawcons-Stroke.ttf"
  install_resource "IconFontKit/IconFontKit/IcoMoon-Free.ttf"
  install_resource "IconFontKit/IconFontKit/ionicons.ttf"
  install_resource "IconFontKit/IconFontKit/LigatureSymbols.ttf"
  install_resource "IconFontKit/IconFontKit/Linea.ttf"
  install_resource "IconFontKit/IconFontKit/Linearicons-Free.ttf"
  install_resource "IconFontKit/IconFontKit/mfglabsiconset-webfont.ttf"
  install_resource "IconFontKit/IconFontKit/map-icons.ttf"
  install_resource "IconFontKit/IconFontKit/materialdesignicons-webfont.ttf"
  install_resource "IconFontKit/IconFontKit/MaterialIcons-Regular.ttf"
  install_resource "IconFontKit/IconFontKit/meteocons.ttf"
  install_resource "IconFontKit/IconFontKit/Metrize-Icons.ttf"
  install_resource "IconFontKit/IconFontKit/octicons.ttf"
  install_resource "IconFontKit/IconFontKit/open-iconic.ttf"
  install_resource "IconFontKit/IconFontKit/openwebicons.ttf"
  install_resource "IconFontKit/IconFontKit/StreamlineFree.ttf"
  install_resource "IconFontKit/IconFontKit/Pe-icon-7-stroke.ttf"
  install_resource "IconFontKit/IconFontKit/themify.ttf"
  install_resource "IconFontKit/IconFontKit/typicons.ttf"
  install_resource "IconFontKit/IconFontKit/weathericons-regular-webfont.ttf"
  install_resource "IconFontKit/IconFontKit/zocial.ttf"
fi
if [[ "$CONFIGURATION" == "Release" ]]; then
  install_resource "IconFontKit/IconFontKit/dashicons.ttf"
  install_resource "IconFontKit/IconFontKit/devicons.ttf"
  install_resource "IconFontKit/IconFontKit/dripicons.ttf"
  install_resource "IconFontKit/IconFontKit/elusiveicons-webfont.ttf"
  install_resource "IconFontKit/IconFontKit/Entypo.ttf"
  install_resource "IconFontKit/IconFontKit/EvilIcons.ttf"
  install_resource "IconFontKit/IconFontKit/FontAwesome.otf"
  install_resource "IconFontKit/IconFontKit/foundation-icons.ttf"
  install_resource "IconFontKit/IconFontKit/Genericons.ttf"
  install_resource "IconFontKit/IconFontKit/Hawcons-Filled.ttf"
  install_resource "IconFontKit/IconFontKit/Hawcons-Stroke.ttf"
  install_resource "IconFontKit/IconFontKit/IcoMoon-Free.ttf"
  install_resource "IconFontKit/IconFontKit/ionicons.ttf"
  install_resource "IconFontKit/IconFontKit/LigatureSymbols.ttf"
  install_resource "IconFontKit/IconFontKit/Linea.ttf"
  install_resource "IconFontKit/IconFontKit/Linearicons-Free.ttf"
  install_resource "IconFontKit/IconFontKit/mfglabsiconset-webfont.ttf"
  install_resource "IconFontKit/IconFontKit/map-icons.ttf"
  install_resource "IconFontKit/IconFontKit/materialdesignicons-webfont.ttf"
  install_resource "IconFontKit/IconFontKit/MaterialIcons-Regular.ttf"
  install_resource "IconFontKit/IconFontKit/meteocons.ttf"
  install_resource "IconFontKit/IconFontKit/Metrize-Icons.ttf"
  install_resource "IconFontKit/IconFontKit/octicons.ttf"
  install_resource "IconFontKit/IconFontKit/open-iconic.ttf"
  install_resource "IconFontKit/IconFontKit/openwebicons.ttf"
  install_resource "IconFontKit/IconFontKit/StreamlineFree.ttf"
  install_resource "IconFontKit/IconFontKit/Pe-icon-7-stroke.ttf"
  install_resource "IconFontKit/IconFontKit/themify.ttf"
  install_resource "IconFontKit/IconFontKit/typicons.ttf"
  install_resource "IconFontKit/IconFontKit/weathericons-regular-webfont.ttf"
  install_resource "IconFontKit/IconFontKit/zocial.ttf"
fi

mkdir -p "${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}"
rsync -avr --copy-links --no-relative --exclude '*/.svn/*' --files-from="$RESOURCES_TO_COPY" / "${TARGET_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}"
if [[ "${ACTION}" == "install" ]] && [[ "${SKIP_INSTALL}" == "NO" ]]; then
  mkdir -p "${INSTALL_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}"
  rsync -avr --copy-links --no-relative --exclude '*/.svn/*' --files-from="$RESOURCES_TO_COPY" / "${INSTALL_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}"
fi
rm -f "$RESOURCES_TO_COPY"

if [[ -n "${WRAPPER_EXTENSION}" ]] && [ "`xcrun --find actool`" ] && [ -n "$XCASSET_FILES" ]
then
  # Find all other xcassets (this unfortunately includes those of path pods and other targets).
  OTHER_XCASSETS=$(find "$PWD" -iname "*.xcassets" -type d)
  while read line; do
    if [[ $line != "${PODS_ROOT}*" ]]; then
      XCASSET_FILES+=("$line")
    fi
  done <<<"$OTHER_XCASSETS"

  printf "%s\0" "${XCASSET_FILES[@]}" | xargs -0 xcrun actool --output-format human-readable-text --notices --warnings --platform "${PLATFORM_NAME}" --minimum-deployment-target "${!DEPLOYMENT_TARGET_SETTING_NAME}" ${TARGET_DEVICE_ARGS} --compress-pngs --compile "${BUILT_PRODUCTS_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}"
fi
