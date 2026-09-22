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

## [Object](object.md).getBody2D() / removeBody2D()

Returns the Box2D physics handle for this object, creating the body component if it does not already exist. Configure shapes, type, and properties on the handle, then call `load()` to spawn it. Destroys the 2D physics body attached to this object with `removeBody2D()`.

```cpp
Body2D getBody2D();
void removeBody2D();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-body-2d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-body-2d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
