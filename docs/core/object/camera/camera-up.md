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

## [Camera](camera.md).up

Local up vector used with the target to build the view matrix. Defaults to `(0, 1, 0)`; change it for wall-running or tilted chase cameras.

```cpp
void setUp(Vector3 up);
void setUp(const float x, const float y, const float z);
Vector3 getUp() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-up.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-up.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
