---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).swap(Quaternion& other)

Exchanges all four components with another quaternion in place. Double-buffers facings for glitch-free turn updates.

```cpp
void swap(Quaternion& other);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-swap.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-swap.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
