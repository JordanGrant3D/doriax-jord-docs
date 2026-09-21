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

## [Camera](camera.md).autoResize

When `true` (the default), the projection is recalculated automatically when the canvas size changes. Disable it when the chase camera manages aspect or clip planes manually.

```cpp
void setAutoResize(bool autoResize);
bool isAutoResize() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-auto-resize.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-auto-resize.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
