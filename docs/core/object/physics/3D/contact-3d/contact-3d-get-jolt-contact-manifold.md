[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Contact3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Contact3D](contact-3d.md).getJoltContactManifold()

Raw Jolt contact manifold for C++ gameplay code. Reach for it when the decoded accessors below are not enough.

```cpp
const JPH::ContactManifold* getJoltContactManifold() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-get-jolt-contact-manifold.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-get-jolt-contact-manifold.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
