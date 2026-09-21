[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).UNIT_SCALE

Shorthand for writing `Vector4(1, 1, 1, 1)`. Equal weight on all four blend channels, or opaque white as an RGBA colour.

```cpp
static const Vector4 UNIT_SCALE;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-unit-scale.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-unit-scale.h"
```
