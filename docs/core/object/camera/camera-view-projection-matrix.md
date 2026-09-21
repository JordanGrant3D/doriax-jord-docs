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

## [Camera](camera.md).getViewProjectionMatrix()

Combined view-projection matrix, ready to pass to shaders or a custom render pipeline for world-to-clip transforms.

```cpp
Matrix4 getViewProjectionMatrix() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-view-projection-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-view-projection-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
