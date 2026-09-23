---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Object
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Object](object.md).setBillboardRotation() / getBillboardRotation()

Applies an extra rotation offset on top of the automatic billboard facing, useful for tilting sprites or markers without breaking camera tracking.

```cpp
void setBillboardRotation(Quaternion rotation);
void setBillboardRotation(const float xAngle, const float yAngle, const float zAngle);
Quaternion getBillboardRotation() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-billboard-rotation.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-billboard-rotation.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
