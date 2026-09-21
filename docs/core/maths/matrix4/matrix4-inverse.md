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

## [Matrix4](matrix4.md).inverse()

Returns the fully inverted matrix (adjugate over determinant). Turns a world matrix into its view matrix for chase cameras.

```cpp
Matrix4 inverse() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-inverse.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-inverse.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
