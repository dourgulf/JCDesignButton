A fully customisable subclass of the native UIControl which allows you to create beautiful buttons with Xcode IDE without writing any code.



## Installation

1. Don't use Pod bacuase Xcode has BUG with Pod
2. Add `JCDesignButton` classes to your project
3. Add a UIView to your XIB or Storyboard, Change the class to `JCDesignButton`
4. Design your button as you want



## How to make more IconFontKit support

`JCDesignButton` Only support one font set from IconFontKit—Awesome at design time. You can use `JCIconFontManager` to register more font set by runtime at any place. You can find such code at Example project, it's `AppDelegate` launch method.



If you want more font set at design time. You can do it with two method. 

* Modify `-loadDesignIconFont` method in file JCDesignButton.m
* or, derive a custom class from `JCDesignButton`, and rewrite the `-loadDesignIconFont` method. You can find an exmple class named `JCIconFontKitButton` in example project.



## TODO

1. Maybe createViews from code not XIB.
2. Verical layout support.
3. Async loading interface support.