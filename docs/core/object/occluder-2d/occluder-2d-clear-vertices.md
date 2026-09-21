---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Occluder2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Occluder2D](occluder-2d.md).clearVertices

Removes every custom polygon point, leaving an empty outline. The stealth gallery calls it before reshaping a shadow wall when a vault door opens.

```cpp
void clearVertices();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/occluder-2d/occluder-2d-clear-vertices.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/occluder-2d/occluder-2d-clear-vertices.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
