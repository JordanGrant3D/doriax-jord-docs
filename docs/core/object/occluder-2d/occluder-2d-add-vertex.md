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

## [Occluder2D](occluder-2d.md).addVertex

Appends a local-space point to the custom polygon outline (switching shape to `POLYGON`) and connects points in order. The stealth gallery builds square shadow walls that block guard sight lines.

```cpp
void addVertex(Vector2 vertex);
void addVertex(float x, float y);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/occluder-2d/occluder-2d-add-vertex.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/occluder-2d/occluder-2d-add-vertex.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
