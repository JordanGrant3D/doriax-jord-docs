---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Camera
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Camera](camera.md).aspect

Width-to-height ratio of the perspective frustum. In `autoResize` mode the engine updates it automatically; set it manually for fixed-ratio chase views.

```cpp
void setAspect(float aspect);
float getAspect() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-aspect.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-aspect.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
