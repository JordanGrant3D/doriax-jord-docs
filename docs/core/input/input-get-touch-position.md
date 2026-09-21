[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Input
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Input](input.md).getTouchPosition(int pointer)

Returns the current position of the touch contact identified by `pointer` as a [Vector2](../maths/vector2/vector2.md). Use [findTouchIndex](input-find-touch-index.md) to convert a pointer id to an array index if needed.

```cpp
static Vector2 getTouchPosition(int pointer);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-get-touch-position.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-get-touch-position.h"
```
