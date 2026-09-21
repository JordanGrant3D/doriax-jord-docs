[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).normalizeL()

Normalizes in place like `normalize()`, but returns the original length. One call gives you both the direction and the distance.

```cpp
float normalizeL();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-normalize-l.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-normalize-l.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
