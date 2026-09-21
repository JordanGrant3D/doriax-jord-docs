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

## [Camera](camera.md).getWorldDirection()

Forward vector in world space. Unlike the local direction, it stays correct when the chase camera is parented to a moving rig.

```cpp
Vector3 getWorldDirection() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-world-direction.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-world-direction.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
