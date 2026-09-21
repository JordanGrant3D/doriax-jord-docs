---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).setBackgroundColor()

Sets the background clear color of the scene in RGBA [0, 1] range, and `getBackgroundColor()` returns the current value. A CharacterController night-vision script tints it dark blue while crouching.

```cpp
void setBackgroundColor(Vector4 color);
void setBackgroundColor(float red, float green, float blue);
void setBackgroundColor(float red, float green, float blue, float alpha);
Vector4 getBackgroundColor() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-background-color.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-background-color.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
