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

## [Camera](camera.md).rotatePosition()

Orbits the camera position around the current target by `angle` degrees. This is the core of an orbit-style chase camera driven by horizontal input.

```cpp
void rotatePosition(float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-rotate-position.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-rotate-position.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
