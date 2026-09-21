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

## [Camera](camera.md).getViewMatrix()

Computed view matrix, ready to pass to shaders or a custom render pipeline. It is refreshed every frame from the chase position and target.

```cpp
Matrix4 getViewMatrix() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-view-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-view-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
