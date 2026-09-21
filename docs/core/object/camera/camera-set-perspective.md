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

## [Camera](camera.md).setPerspective()

Configures perspective (3D) projection: `yfov` is the vertical field-of-view in degrees, `aspect` the width-to-height ratio, plus near and far clip distances. Also disables `autoResize`.

```cpp
void setPerspective(float yfov, float aspect, float nearValue, float farValue);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-set-perspective.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-set-perspective.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
