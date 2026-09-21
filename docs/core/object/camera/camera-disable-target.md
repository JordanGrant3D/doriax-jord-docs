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

## [Camera](camera.md).disableTarget()

Turns target mode off so the `Transform` rotation drives the view instead of the look-at point. Use it for free-look chase cameras where the player aims with rotation.

```cpp
void disableTarget();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-disable-target.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-disable-target.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
