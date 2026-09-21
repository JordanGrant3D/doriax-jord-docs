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

## [Matrix4](matrix4.md).identity()

Resets to the identity matrix in place and returns `*this`. The default constructor already calls it; call again to clear accumulated transforms.

```cpp
Matrix4& identity();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-identity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-identity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
