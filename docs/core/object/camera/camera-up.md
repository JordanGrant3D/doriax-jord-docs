[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
