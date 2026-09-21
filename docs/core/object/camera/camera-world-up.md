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

## [Camera](camera.md).getWorldUp()

Up vector in world space. Read it to keep HUD markers or the chase boom aligned when the camera rig is tilted.

```cpp
Vector3 getWorldUp() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-world-up.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-world-up.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
