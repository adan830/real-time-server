class Server
{
public:
	static std::unique_ptr< Server >	sInstance;

	static bool StaticInit();

	void DoFrame();

	int Run();

	void HandleNewClient( ClientProxyPtr inClientProxy );
	//void HandleLostClient( ClientProxyPtr inClientProxy );

	//RoboCatPtr	GetCatForPlayer( int inPlayerId );
	//void	SpawnCatForPlayer( int inPlayerId );


private:
	Server();

	bool	InitNetworkManager();

//private:

	//bool	mShouldKeepRunning;

};