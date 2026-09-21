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

## [Camera](camera.md).setOrtho()

Configures orthographic projection with explicit clip planes, rendering everything inside the `(left, right, bottom, top, near, far)` box without perspective shrink. Also disables `autoResize`.

```cpp
void setOrtho(float left, float right, float bottom, float top, float nearValue, float farValue);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-set-ortho.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-set-ortho.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
