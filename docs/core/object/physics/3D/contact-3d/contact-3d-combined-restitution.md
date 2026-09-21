---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Contact3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Contact3D](contact-3d.md).combinedRestitution

Combined bounciness applied for this contact. Clamp it down on landing so the character does not bounce off floors.

```cpp
float getCombinedRestitution() const;
void setCombinedRestitution(float combinedRestitution);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-combined-restitution.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-combined-restitution.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
