---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
