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

## [Input](input.md).getMousePosition()

Current cursor position in canvas coordinates as a [Vector2](../maths/vector2/vector2.md). Updated every frame; use it for hover detection and aim targeting in `onUpdate`.

```cpp
static Vector2 getMousePosition();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-get-mouse-position.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-get-mouse-position.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
