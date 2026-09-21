---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix4](matrix4.md).determinant()

Returns the 4x4 determinant: the volume scale factor. `1` for rigid poses, `0` for flattened matrices that cannot be inverted.

```cpp
float determinant() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-determinant.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-determinant.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
