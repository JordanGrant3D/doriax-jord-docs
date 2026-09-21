[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
