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

## [Camera](camera.md).elevatePosition()

Moves the camera position along a sphere centered at the target by `angle` degrees. It raises or lowers an orbit chase camera without changing its distance.

```cpp
void elevatePosition(float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-elevate-position.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-elevate-position.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
