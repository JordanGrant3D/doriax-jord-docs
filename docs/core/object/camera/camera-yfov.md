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

## [Camera](camera.md).yfov

Vertical field-of-view in degrees for perspective projection. Widen it for a faster-feeling chase camera, narrow it for a tighter over-shoulder view.

```cpp
void setYFov(float yfov);
float getYFov() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-yfov.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-yfov.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
