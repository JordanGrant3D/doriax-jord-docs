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

## [Camera](camera.md).getWorldTarget()

Look-at point in world space, after parent transforms are applied. Useful when the chase target sits under a moving vehicle or platform.

```cpp
Vector3 getWorldTarget() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-world-target.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-world-target.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
