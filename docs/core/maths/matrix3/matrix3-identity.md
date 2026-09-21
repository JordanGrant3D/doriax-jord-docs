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

## [Matrix3](matrix3.md).identity()

Resets to the identity matrix in place and returns `*this`. The default constructor already calls it; call again to clear accumulated rotations.

```cpp
Matrix3& identity();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-identity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-identity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
