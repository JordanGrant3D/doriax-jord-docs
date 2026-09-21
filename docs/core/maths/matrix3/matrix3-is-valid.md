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

## [Matrix3](matrix3.md).isValid()

Returns `false` the moment any of the nine entries is non-finite. Guards hand-built matrices before they poison facing math.

```cpp
bool isValid() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-is-valid.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-is-valid.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
