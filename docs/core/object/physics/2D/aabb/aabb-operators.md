---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
AABB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [AABB](aabb.md).operator=() / operator==() / operator!=()

Copy one box into another with `operator=`, and test two boxes for exact corner equality with `operator==` / `operator!=`.

```cpp
AABB& operator= (const AABB& rhs);
bool operator== (const AABB& rhs) const;
bool operator!= (const AABB& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/aabb/aabb-operators.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/aabb/aabb-operators.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
