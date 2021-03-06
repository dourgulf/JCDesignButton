A fully customisable subclass of the native UIControl which allows you to create beautiful buttons with Xcode IDE without writing any code.


## Dependency IconFontKit
It depend the [IconFontKit](https://github.com/ElfSundae/IconFontKit) core and Awesome font set.

**You can remove this dependency by define macro `JCDESIGN_BUTTON_DISABLE_ICONFONT`**

## Installation

**Don't use Pod bacause Xcode has BUG with Pod.**

1. Add JCDesignButton.* JCIconFontManager.* to your project. 
2. Add a UIView to your XIB or Storyboard, Change it's class to `JCDesignButton`
3. Design your button as you want

![design image](Documents/design1.png)
![design image](Documents/design2.png)

## How to make more IconFontKit support

`JCDesignButton` Only use one font set(Awesome) from IconFontKit at design time.

If you want more font set at design time or use your own icon font. You can do it with two ways: 

1. Modify `-loadDesignIconFont` method in file JCDesignButton.m directly;
2. or, derive a custom class from `JCDesignButton`, and rewrite the `-loadDesignIconFont` method. You can find an exmple class named `JCIconFontKitButton` in example project, and change class of UIView in your XIB from `JCDesignButton` to your custom class.

## TODO

1. Verical layout support.
2. Async loading interface support.

## License
MIT License

Copyright (c) 2017 dawenhing

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
