[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Rect

A 2D rectangle defined by an `x`/`y` position plus `width`/`height` dimensions.
Rects describe UI buttons, minimap viewports and mouse-picking zones around the
CharacterController mouse cursor.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**x**](rect-x.md) | X position of the rectangle. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**y**](rect-y.md) | Y position of the rectangle. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**width**](rect-width.md) | Width of the rectangle. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**height**](rect-height.md) | Height of the rectangle. |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Initializes position to (0, 0) and size to (1, 1). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height | Constructs a rectangle with specified coordinates and dimensions. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Rect**](rect.md)& t | Copy constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](../vector4/vector4.md)& v | Constructs a rectangle using a Vector4 (`x`, `y`, `z` as width, `w` as height). |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](rect-operator-index.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) i | Returns component value by index (0: x, 1: y, 2: width, 3: height). |
| [**float&**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](rect-operator-index.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) i | Returns a reference to component by index (0: x, 1: y, 2: width, 3: height). |
| [**Rect**](rect.md)& | [**operator =**](rect-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Rect**](rect.md)& t | Assigns values from another rectangle. |
| [**Rect**](rect.md)& | [**operator =**](rect-operator-assign.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](../vector4/vector4.md)& v | Assigns values from a Vector4. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](rect-operator-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Rect**](rect.md)& t | Checks equality with another rectangle. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](rect-operator-not-equal.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Rect**](rect.md)& t | Checks inequality with another rectangle. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](rect-contains.md) | [**Vector2**](../vector2/vector2.md) point | Checks if the 2D point is within the rectangle's bounds. |
| [**Rect**](rect.md)& | [**fitOnRect**](rect-fit-on-rect.md) | [**Rect**](rect.md) rect | Fits and clamps the rectangle within the specified target rectangle. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getHeight**](rect-get-height.md) |  | Gets the height of the rectangle. |
| [**Vector4**](../vector4/vector4.md) | [**getVector**](rect-get-vector.md) |  | Returns the rectangle as a Vector4 (`x`, `y`, `width`, `height`). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getWidth**](rect-get-width.md) |  | Gets the width of the rectangle. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getX**](rect-get-x.md) |  | Gets the X coordinate. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getY**](rect-get-y.md) |  | Gets the Y coordinate. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isNormalized**](rect-is-normalized.md) |  | Checks if all values (`x`, `y`, `width`, `height`) are normalized between 0 and 1. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isZero**](rect-is-zero.md) |  | Checks if all values (`x`, `y`, `width`, `height`) are equal to zero. |
| [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**ptr**](rect-ptr.md) |  | Returns a pointer to the memory address of `x`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setHeight**](rect-set-height.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) height | Sets the height of the rectangle. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRect**](rect-set-rect.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height | Sets position and dimensions of the rectangle. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRect**](rect-set-rect.md) | [**Rect**](rect.md) rect | Sets position and dimensions matching another rectangle. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setWidth**](rect-set-width.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) width | Sets the width of the rectangle. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setX**](rect-set-x.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x | Sets the X coordinate. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setY**](rect-set-y.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) y | Sets the Y coordinate. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**toString**](rect-to-string.md) |  | Returns a string representation of the rectangle. |
