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

## [Input](input.md).getMouseScroll()

Accumulated scroll-wheel delta since the last frame as a [Vector2](../maths/vector2/vector2.md) `(xoffset, yoffset)`. Reset each frame; CharacterController scripts read `y` for zoom.

```cpp
static Vector2 getMouseScroll();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-get-mouse-scroll.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-get-mouse-scroll.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
