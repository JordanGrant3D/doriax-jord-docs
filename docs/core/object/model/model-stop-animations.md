---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Model
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Model](model.md).stopAnimations()

Fades out every running animation clip on this model over `fadeTime` seconds. Pair it with `resetToBindPose` when you need a clean bind-pose rest state afterwards.

```cpp
void stopAnimations(float fadeTime);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-stop-animations.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-stop-animations.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
