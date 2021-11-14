import typer


def main(user_name: str = typer.Option(..., "--name", "-n"), 
         formal: bool = typer.Option(False, "--formal", "-f")):
    if formal:
        typer.echo(f"Good day {user_name}")
    else:
        typer.echo(f"Hello {user_name}")


if __name__ == "__main__":
    typer.run(main)
