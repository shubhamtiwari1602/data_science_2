## GitHub Copilot Chat

- Extension Version: 0.22.4 (prod)
- VS Code: vscode/1.95.3
- OS: Mac

## Network

User Settings:
```json
  "github.copilot.advanced": {
    "debug.useElectronFetcher": true,
    "debug.useNodeFetcher": false
  }
```

Connecting to https://api.github.com:
- DNS ipv4 Lookup: 20.207.73.85 (13 ms)
- DNS ipv6 Lookup: ::ffff:20.207.73.85 (2 ms)
- Electron Fetcher (configured): HTTP 200 (339 ms)
- Node Fetcher: HTTP 200 (107 ms)
- Helix Fetcher: HTTP 200 (235 ms)

Connecting to https://api.individual.githubcopilot.com/_ping:
- DNS ipv4 Lookup: 140.82.112.21 (4 ms)
- DNS ipv6 Lookup: ::ffff:140.82.112.21 (0 ms)
- Electron Fetcher (configured): HTTP 200 (886 ms)
- Node Fetcher: HTTP 200 (971 ms)
- Helix Fetcher: HTTP 200 (966 ms)

## Documentation

In corporate networks: [Troubleshooting firewall settings for GitHub Copilot](https://docs.github.com/en/copilot/troubleshooting-github-copilot/troubleshooting-firewall-settings-for-github-copilot).