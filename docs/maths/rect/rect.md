###### version: 0.7.1
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**x**](../../incomplete-docs.md) | X position of the rectangle. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**y**](../../incomplete-docs.md) | Y position of the rectangle. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**width**](../../incomplete-docs.md) | Width of the rectangle. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**height**](../../incomplete-docs.md) | Height of the rectangle. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| | Default constructor. Initializes position to (0, 0) and size to (1, 1). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height | Constructs a rectangle with specified coordinates and dimensions. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Rect**](rect.md)& t | Copy constructor. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](../vector4/vector4.md)& v | Constructs a rectangle using a Vector4 (`x`, `y`, `z` as width, `w` as height). |

## Operators

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**size_t**](https://en.cppreference.com/cpp/types/size_t) i | Returns component value by index (0: x, 1: y, 2: width, 3: height). |
| [**float&**](https://en.cppreference.com/cpp/keyword/float) | [**operator []**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**size_t**](https://en.cppreference.com/cpp/types/size_t) i | Returns a reference to component by index (0: x, 1: y, 2: width, 3: height). |
| [**Rect**](rect.md)& | [**operator =**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Rect**](rect.md)& t | Assigns values from another rectangle. |
| [**Rect**](rect.md)& | [**operator =**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Vector4**](../vector4/vector4.md)& v | Assigns values from a Vector4. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator ==**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Rect**](rect.md)& t | Checks equality with another rectangle. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**operator !=**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**Rect**](rect.md)& t | Checks inequality with another rectangle. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**contains**](../../incomplete-docs.md) | [**Vector2**](../vector2/vector2.md) point | Checks if the 2D point is within the rectangle's bounds. |
| [**Rect**](rect.md)& | [**fitOnRect**](../../incomplete-docs.md) | [**Rect**](rect.md) rect | Fits and clamps the rectangle within the specified target rectangle. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getHeight**](../../incomplete-docs.md) | | Gets the height of the rectangle. |
| [**Vector4**](../vector4/vector4.md) | [**getVector**](../../incomplete-docs.md) | | Returns the rectangle as a Vector4 (`x`, `y`, `width`, `height`). |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getWidth**](../../incomplete-docs.md) | | Gets the width of the rectangle. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getX**](../../incomplete-docs.md) | | Gets the X coordinate. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getY**](../../incomplete-docs.md) | | Gets the Y coordinate. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isNormalized**](../../incomplete-docs.md) | | Checks if all values (`x`, `y`, `width`, `height`) are normalized between 0 and 1. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isZero**](../../incomplete-docs.md) | | Checks if all values (`x`, `y`, `width`, `height`) are equal to zero. |
| [**float\***](https://en.cppreference.com/cpp/keyword/float) | [**ptr**](../../incomplete-docs.md) | | Returns a pointer to the memory address of `x`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setHeight**](../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) height | Sets the height of the rectangle. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRect**](../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**float**](https://en.cppreference.com/cpp/keyword/float) width, [**float**](https://en.cppreference.com/cpp/keyword/float) height | Sets position and dimensions of the rectangle. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRect**](../../incomplete-docs.md) | [**Rect**](rect.md) rect | Sets position and dimensions matching another rectangle. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setWidth**](../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) width | Sets the width of the rectangle. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setX**](../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x | Sets the X coordinate. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setY**](../../incomplete-docs.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) y | Sets the Y coordinate. |
| [**std::string**](https://en.cppreference.com/cpp/string/basic_string) | [**toString**](../../incomplete-docs.md) | | Returns a string representation of the rectangle. |