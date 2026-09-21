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

## [Camera](camera.md).isUsingTarget()

Returns `true` while target mode is active. Target mode is on by default and `setTarget` turns it back on; poll this before applying rotation-driven free-look.

```cpp
bool isUsingTarget() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-is-using-target.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-is-using-target.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
