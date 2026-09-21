---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
CollideShapeResult3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [CollideShapeResult3D](collide-shape-result-3d.md).getShapeIndex2()

Shape index on the second body. Check it to tell landing ground apart from walls before accepting the hit.

```cpp
size_t getShapeIndex2() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/collide-shape-result-3d/collide-shape-result-3d-get-shape-index-2.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/collide-shape-result-3d/collide-shape-result-3d-get-shape-index-2.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
