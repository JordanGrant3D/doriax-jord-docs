[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).d

Signed distance offset of the plane: surface points satisfy `normal.dotProduct(p) + d == 0`. Raising `d` lifts a ground plane upward.

```cpp
float d;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
