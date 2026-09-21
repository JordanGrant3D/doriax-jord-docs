---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix3](matrix3.md).determinant()

Returns the determinant: the volume scale factor. `1` for pure rotations, `0` for singular (flattened) matrices that cannot be inverted.

```cpp
float determinant() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-determinant.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-determinant.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
