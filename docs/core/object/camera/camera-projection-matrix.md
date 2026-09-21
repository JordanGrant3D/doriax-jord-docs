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

## [Camera](camera.md).getProjectionMatrix()

Computed projection matrix, ready to pass to shaders or a custom render pipeline. It reflects the current perspective or ortho settings.

```cpp
Matrix4 getProjectionMatrix() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-projection-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-projection-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
