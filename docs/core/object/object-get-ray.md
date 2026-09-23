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

## [Object](object.md).getRay()

Constructs a ray originating from this object's world position in the given world-space direction. Useful for raycasting from an object's location, such as a ground check pointing down.

```cpp
Ray getRay(Vector3 direction);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-get-ray.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-get-ray.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
