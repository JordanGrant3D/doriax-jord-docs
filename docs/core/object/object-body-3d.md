---
version: 0.7.1
status: untested # Options: untested, bot-tested, human-tested
---

---
Object
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Object](object.md).getBody3D() / removeBody3D()

Returns the Jolt physics handle for this object, creating the body component if it does not already exist. Configure shapes, type, and properties on the handle, then call `load()` to spawn it. Destroys the 3D physics body attached to this object with `removeBody3D()`.

```cpp
Body3D getBody3D();
void removeBody3D();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-body-3d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-body-3d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
