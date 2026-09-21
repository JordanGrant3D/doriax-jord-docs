---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
FileData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [FileData](file-data.md).readString()

Reads stream bytes into a string. Without arguments it reads the whole remaining stream; with `stringlen` it reads exactly that many bytes. The CharacterController tutorial uses the full form to load `saves/tutorial_config.json` and the sized form to read fixed save-slot records.

```cpp
std::string readString();
std::string readString(unsigned int stringlen);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-read-string.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-read-string.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
