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

## [Camera](camera.md).getDirection()

Local forward vector in camera space. A chase camera can derive its boom position from it: park the camera behind the target along the view direction.

```cpp
Vector3 getDirection() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-direction.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-direction.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
