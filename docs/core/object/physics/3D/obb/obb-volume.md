---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
OBB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [OBB](obb.md).volume()

Returns the volume of the box: `8 * halfExtents.x * halfExtents.y * halfExtents.z` (the full-extent product).

```cpp
float volume() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-volume.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-volume.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
