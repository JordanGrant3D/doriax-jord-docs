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

## [Camera](camera.md).getRight()

Local right vector in camera space. Offset the chase boom sideways along it for an over-shoulder view.

```cpp
Vector3 getRight() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-right.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-right.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
